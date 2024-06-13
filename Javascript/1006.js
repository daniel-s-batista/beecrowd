var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let A = parseFloat(lines.shift()) * 2;
let B = parseFloat(lines.shift()) * 3;
let C = parseFloat(lines.shift()) * 5;
console.log("MEDIA =", ((A + B + C) / 10).toFixed(1));
