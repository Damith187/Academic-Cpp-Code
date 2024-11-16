<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Include the database connection file
    include 'database.php';

    // Get email and password from POST request
    $email = $_POST['email'];
    $password = $_POST['password'];

    // Prepare and execute SQL query to fetch the stored hash
    $sql = "SELECT password FROM users WHERE email = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("s", $email);
    $stmt->execute();
    $result = $stmt->get_result();

    // Check if the user exists
    if ($result->num_rows > 0) {
        $row = $result->fetch_assoc();
        $stored_hash = $row['password'];

        // Verify the password
        if (password_verify($password, $stored_hash)) {
            echo "Login successful!";
            // Redirect to a dashboard or home page
            // header("Location: dashboard.php");
        } else {
            echo "Invalid password.";
        }
    } else {
        echo "Email not found.";
    }

    // Close the statement and connection
    $stmt->close();
    $conn->close();
}
?>