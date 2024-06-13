var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let segundos = parseInt(lines.shift());
let minutos = Math.floor(segundos / 60 % 60);
let horas = Math.floor(segundos / 3600);
console.log(horas + ":" + minutos + ":" + (segundos % 60));
