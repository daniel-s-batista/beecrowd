var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let salario = parseFloat(lines.shift());
let percentual = 0.0;
if (salario <= 400)
    percentual = 0.15;
else if (salario <= 800)
    percentual = 0.12;
else if (salario <= 1200)
    percentual = 0.10;
else if (salario <= 2000)
    percentual = 0.07;
else percentual = 0.04;
console.log("Novo salario:", (salario * (1 + percentual)).toFixed(2) + "\nReajuste ganho:", (salario * percentual).toFixed(2) + "\nEm percentual:", (percentual * 100).toFixed(0), "%");
