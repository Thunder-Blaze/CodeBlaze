const EventEmitter = require('events');
const fs = require('fs');
const path = require('path');

const filePath = path.join(__dirname, "practice1.txt")

const SaveData = () => {
    try {
        fs.writeFileSync(filePath, JSON.stringify(Counts), "utf-8");
        console.log("\nSaved Data Successfully")
    } catch (err) {
        console.log(err);
    }
}

const ReadData = () => {
    try {
        data = fs.readFileSync(filePath, "utf-8");
        return JSON.parse(data);
    } catch (err) {
        console.log(err.message);
        return undefined;
    }
}

const Emitter = new EventEmitter();

const Counts = ReadData() || {
    login :0,
    logout :0,
    purchase :0,
    update :0,
}

Emitter.on("user-login", ({username, password}) => {
    if (username === password) {
        console.log("Login Successful");
    } else {
        console.log("Login Failed");
    }
    Counts.login++;
})

Emitter.on("user-logout", () => {
    console.log("Sucessfully Logged Out")
    Counts.logout++;
})

Emitter.on("user-purchase", (user) => {
    if (user) {
        console.log("Purchased Sucessfully")
    } else {
        console.log("Purchase Unsuccessful")
    }
    Counts.purchase++;
})

Emitter.on("profile-update", () => {
    console.log("Profile Updated")
    Counts.update++;
})

Emitter.emit("user-login",{username: "a",password: "a"})
Emitter.emit("user-login",{username: "b",password: "a"})
Emitter.emit("user-login",{username: "c",password: "c"})
Emitter.emit("profile-update")
Emitter.emit("profile-update")
Emitter.emit("user-logout")
Emitter.emit("user-purchase", "a")
Emitter.emit("user-purchase")

Emitter.on("Summary", () => {
    console.log("\nSummary")
    console.log("Login Count "+Counts.login);
    console.log("Logout Count "+Counts.logout);
    console.log("Purchase Count "+Counts.purchase);
    console.log("Profile Update Count "+Counts.update);
})

Emitter.emit("Summary")

SaveData()