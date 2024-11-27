

function validate(){
    // let name = document.getElementsByName("userName")[0].value;
    let name = document.login.userName.value;
    let password = document.login.userPassword.value;
    if (name==null || name==""){
        alert("UserName cannot be Empty");
        return false;
    } else if (password.length < 8){
        alert("Password needs too be more than 8 characters !");
        return false;
    }
}