var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let km = parseInt(lines.shift());
let l = parseFloat(lines.shift());
console.log((km / l).toFixed(3), "km/l")
