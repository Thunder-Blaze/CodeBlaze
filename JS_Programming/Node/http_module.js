const http = require('http');

const server = http.createServer((req, res)=>{
    if (req.url === "/"){
        //            <| IMPORTANT |>              
        res.setHeader("Content-Type", "text/html")
        res.write("<h1>HELLO</h1>");
        res.end();
    }
    else if (req.url === "/sauce"){
        res.setHeader("Content-Type", "text/plain")
        res.write("You Want Sauce 😏 ?");
        res.end();
    } else {
        res.write("Nothing Found");
        res.end();
    }
});

const PORT = 3000;

server.listen(PORT, () => {
    console.log(`🔥 Listening on PORT ${PORT}`)
})