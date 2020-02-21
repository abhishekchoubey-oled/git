use std::io;
use rand::Rng;

fn main() {
    println!("Welcome to Guess the number !");
	let snum = rand::thread_rng().gen_range(1,101);
	println!("Input your guess ");
	let mut guess = String::new();
	/* every method returns a Result which again has various methods defined 
		of which 'expect' is one function. */
	io::stdin().read_line(&mut guess)
		.expect("Failed to read line");
	println!("Your guess is {},{}", guess, snum);
}
