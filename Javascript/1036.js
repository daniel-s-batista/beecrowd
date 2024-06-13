var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

let A = parseFloat(lines.shift());
let B = parseFloat(lines.shift());
let C = parseFloat(lines.shift());
let delta = (B ** 2 - 4 * A * C);
if (delta < 0 || A == 0) 
    console.log("Impossivel calcular");
else
    console.log("R1 =", ((- B + delta ** (1 / 2)) / (2 * A)).toFixed(5) + "\nR2 =", ((- B - delta ** (1 / 2)) / (2 * A)).toFixed(5));
