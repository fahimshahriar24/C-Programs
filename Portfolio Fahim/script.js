// Smooth Scroll for anchor links
document.querySelectorAll('a[href^="#"]').forEach(anchor => {
    anchor.addEventListener('click', function (e) {
      e.preventDefault();
  
      // Scroll the page to the target element smoothly
      document.querySelector(this.getAttribute('href')).scrollIntoView({
        behavior: 'smooth',
        block: 'start'
      });
    });
  });
  
  // Form Validation for Contact Form
  const form = document.querySelector("form");
  const nameInput = form.querySelector("input[type='text']");
  const emailInput = form.querySelector("input[type='email']");
  const messageInput = form.querySelector("textarea");
  
  form.addEventListener("submit", function(e) {
    // Prevent the form from submitting if validation fails
    e.preventDefault();
  
    // Reset previous error messages
    clearErrors();
  
    let valid = true;
  
    // Validate Name
    if (nameInput.value.trim() === "") {
      valid = false;
      showError(nameInput, "Please enter your name.");
    }
  
    // Validate Email
    if (emailInput.value.trim() === "" || !validateEmail(emailInput.value)) {
      valid = false;
      showError(emailInput, "Please enter a valid email address.");
    }
  
    // Validate Message
    if (messageInput.value.trim() === "") {
      valid = false;
      showError(messageInput, "Please enter your message.");
    }
  
    // If everything is valid, submit the form
    if (valid) {
      alert("Message sent successfully!");
      form.reset();
    }
  });
  
  // Function to show error message
  function showError(input, message) {
    const errorSpan = document.createElement("span");
    errorSpan.classList.add("error");
    errorSpan.textContent = message;
    input.parentElement.appendChild(errorSpan);
  }
  
  // Function to clear error messages
  function clearErrors() {
    const errorSpans = document.querySelectorAll(".error");
    errorSpans.forEach(span => span.remove());
  }
  
  // Email Validation Function
  function validateEmail(email) {
    const regex = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
    return regex.test(email);
  }
  
  // Project Hover Effect: Add scale effect on hover for project images
  document.querySelectorAll(".project img").forEach(img => {
    img.addEventListener("mouseover", () => {
      img.style.transform = "scale(1.05)";
    });
  
    img.addEventListener("mouseout", () => {
      img.style.transform = "scale(1)";
    });
  });
  