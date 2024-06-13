var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let num = lines.shift();
let horas = parseFloat(lines.shift());
let vhora = parseFloat(lines.shift());
console.log("NUMBER =", num + "\nSALARY = U$", (horas * vhora).toFixed(2));
