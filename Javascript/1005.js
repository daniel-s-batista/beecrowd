var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let A = parseFloat(lines.shift()) * 3.5;
let B = parseFloat(lines.shift()) * 7.5;
console.log("MEDIA =", ((A + B) / 11).toFixed(5));
