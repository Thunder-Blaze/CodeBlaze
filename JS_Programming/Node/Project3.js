import https from 'https';
import chalk from 'chalk';

const getJoke = async () => {
    const url = 'https://official-joke-api.appspot.com/random_joke';
    // const res = await fetch(url)
    // const resp = await res.json();
    // console.log(resp)
    https.get(url, (response) => {
        let data = "";
        response.on('data', (chunk) => {
            data+=chunk;
        })
        response.on('end', () => {
            const joke = JSON.parse(data);
            console.log(`Here is a Random ${joke.type} Joke :`);
            console.log(chalk.red(`${joke.setup}`))
            console.log(chalk.blue.bgRed.bold(`${joke.punchline}`))
        })
    })
}

getJoke()