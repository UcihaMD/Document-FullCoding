// Mendefinisikan tipe data untuk objek person
interface Person {
    name: string;
    age: number;
}

// Fungsi untuk menyapa seseorang
function greet(person: Person): string {
    return `Hello, ${person.name}! You are ${person.age} years old.`;
}

// Mendefinisikan objek person
const person: Person = {
    name: "Alice",
    age: 30
};

// Mencetak pesan ke konsol
console.log(greet(person));
