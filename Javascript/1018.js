var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let dinheiro = parseInt(lines.shift());
console.log(dinheiro);
console.log(Math.floor(dinheiro / 100), "nota(s) de R$ 100,00");
dinheiro = dinheiro % 100;
console.log(Math.floor(dinheiro / 50), "nota(s) de R$ 50,00");
dinheiro = dinheiro % 50;
console.log(Math.floor(dinheiro / 20), "nota(s) de R$ 20,00");
dinheiro = dinheiro % 20;
console.log(Math.floor(dinheiro / 10), "nota(s) de R$ 10,00");
dinheiro = dinheiro % 10;
console.log(Math.floor(dinheiro / 5), "nota(s) de R$ 5,00");
dinheiro = dinheiro % 5;
console.log(Math.floor(dinheiro / 2), "nota(s) de R$ 2,00");
dinheiro = dinheiro % 2;
console.log(dinheiro, "nota(s) de R$ 1,00");
