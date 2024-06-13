var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let input_extra1 = lines.shift().split(' ');
let input_extra2 = lines.shift().split(' ');
let cod = input_extra1.shift();
let qntd = parseInt(input_extra1.shift());
let preco = parseFloat(input_extra1.shift());
let preco_final = qntd * preco;
cod = input_extra2.shift();
qntd = parseInt(input_extra2.shift());
preco = parseFloat(input_extra2.shift());
preco_final += qntd * preco;
console.log("VALOR A PAGAR: R$", (preco_final).toFixed(2));
