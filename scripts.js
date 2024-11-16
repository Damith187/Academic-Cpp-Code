
// Validation for login form
function validateLogin() {
    const email = document.getElementById('login-email');
    const password = document.getElementById('login-password');
    const emailError = document.getElementById('login-email-error');
    const passwordError = document.getElementById('login-password-error');

    emailError.style.display = email.validity.valid ? 'none' : 'block';
    passwordError.style.display = password.value.length > 0 ? 'none' : 'block';
}

// Validation for sign-up form
function validateSignUp() {
    const email = document.getElementById('signup-email');
    const password = document.getElementById('signup-password');
    const emailError = document.getElementById('signup-email-error');
    const passwordError = document.getElementById('signup-password-error');

    emailError.style.display = email.validity.valid ? 'none' : 'block';
    passwordError.style.display = password.value.length >= 6 ? 'none' : 'block';
}
