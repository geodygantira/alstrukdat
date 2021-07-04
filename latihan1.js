var x = 1.5;
var y = 1.5;

/* Pendefinisian Objek POINT yang terdiri dari Absis (x) dan Ordinat (y)*/
class MakePoint {
    constructor(x,y ) {
        this.Point = `(${x},${y})`;
        this.Absis = x;
        this.Ordinat = y;
    }
}

// console.log(new MakePoint(1,2).Point);
// console.log(new MakePoint(1,2).Ordinat);

/*Pendefinisian fungsi untuk memunculkan Point, Absis, dan Ordinat*/
function TulisPoint (x,y) {
    console.log(new MakePoint(x,y).Point);
}

function TulisAbsis (x) {
    console.log(new MakePoint(x).Absis);
}

function TulisOrdinat(y) {
    console.log(new MakePoint(y).Ordinat);
}

TulisPoint(1,2);

TulisAbsis(20);

TulisOrdinat(10);