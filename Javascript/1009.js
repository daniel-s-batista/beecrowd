var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let nome = lines.shift();
let salf = parseFloat(lines.shift());
let comissao = parseFloat(lines.shift()) * 0.15;
console.log("TOTAL = R$", (salf + comissao).toFixed(2));
