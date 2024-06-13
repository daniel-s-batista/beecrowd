var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

let hi = parseInt(lines.shift());
let hf = parseInt(lines.shift());
total = 0;
if (hi < hf)
    total = hf - hi;
else if (hi > hf)
    total = (24 - hi) + hf;
else total = 24;
console.log("O JOGO DUROU", total, "HORA(S)");
