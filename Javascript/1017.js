var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let horas = parseInt(lines.shift());
let velocidade = parseInt(lines.shift());
console.log((velocidade * horas / 12).toFixed(3));
