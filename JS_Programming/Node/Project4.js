// Realtime Currency Converter

import https from 'https';
import readline from 'readline';
import chalk from 'chalk';

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

const apiKey = process.env.EXCHANGE_RATE_API_KEY_1;
const url = `https://v6.exchangerate-api.com/v6/${apiKey}/latest/USD`

const getData = () => {
    https.get(url, (response) => {
        let data = '';
        response.on('data', (chunk)=>{
            data+=chunk;
        })
        response.on('end', () => {
            application(JSON.parse(data));
        })
        response.on('error', () => {
            console.log(`Error Fetching Rates : ${err.message}`)
        })
    })
}

const application = (data) => {
    rl.question("Convert From (USD, INR, NPR...) : ", (fromVal) => {
        fromVal=fromVal.toUpperCase();
        if (fromVal in data.conversion_rates) {
            rl.question("Convert To (USD, INR, NPR...) : ", (toVal) => {
                toVal=toVal.toUpperCase();
                if (toVal in data.conversion_rates) {
                    rl.question("Amount : ", (amount) => {
                        if (typeof parseInt(amount) === 'number') {
                            const calcAmt = data.conversion_rates[toVal] / data.conversion_rates[fromVal] * amount;
                            console.log(chalk.blue.bgRed.bold(`${amount} ${fromVal} is approximately ${calcAmt} ${toVal}`));
                            rl.close();
                        } else {
                            console.log("Wrong Input");
                            rl.close();
                        }
                    })
                } else {
                    console.log("Wrong Input");
                    rl.close();
                };
            })
        } else {
            console.log("Wrong Input");
            rl.close();
        };
    })
}

getData();