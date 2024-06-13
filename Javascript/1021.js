var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let dinheiro = parseFloat(lines.shift());
console.log("NOTAS:")
console.log(Math.floor(dinheiro / 100), "nota(s) de R$ 100.00");
dinheiro = dinheiro % 100;
console.log(Math.floor(dinheiro / 50), "nota(s) de R$ 50.00");
dinheiro = dinheiro % 50;
console.log(Math.floor(dinheiro / 20), "nota(s) de R$ 20.00");
dinheiro = dinheiro % 20;
console.log(Math.floor(dinheiro / 10), "nota(s) de R$ 10.00");
dinheiro = dinheiro % 10;
console.log(Math.floor(dinheiro / 5), "nota(s) de R$ 5.00");
dinheiro = dinheiro % 5;
console.log(Math.floor(dinheiro / 2), "nota(s) de R$ 2.00");
dinheiro = dinheiro % 2;
console.log("MOEDAS:")
console.log(Math.floor(dinheiro), "moeda(s) de R$ 1.00");
dinheiro = dinheiro % 1;
console.log(Math.floor(dinheiro / 0.5), "moeda(s) de R$ 0.50");
dinheiro = dinheiro % 0.5;
console.log(Math.floor(dinheiro / 0.25), "moeda(s) de R$ 0.25");
dinheiro = dinheiro % 0.25;
console.log(Math.floor(dinheiro / 0.1), "moeda(s) de R$ 0.10");
dinheiro = dinheiro % 0.1;
console.log(Math.floor(dinheiro / 0.05), "moeda(s) de R$ 0.05");
dinheiro = dinheiro % 0.05;
console.log(Math.round(dinheiro / 0.01), "moeda(s) de R$ 0.01");
