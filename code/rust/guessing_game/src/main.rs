use std::cmp::Ordering;
use std::io;
use rand::Rng;

fn main() {
    println!("Welcome to Guess the number !");
	/* declare a variable and initialize it with a random number,
	we dont want this varibale to be mutable since we are not changing it during
	the course of the program */
	let snum = rand::thread_rng().gen_range(1,101);

	println!("Input your guess ");
	/* declare a mutable variable, its mutable because we need to store info 
	into it  */
	let mut guess = String::new();
	/* every method returns a Result which again has various methods defined 
		of which 'expect' is one function. */
	io::stdin().read_line(&mut guess)
		.expect("Failed to read line");
	
	/* convert the string into integer */
	let guess: u32 = guess.trim().parse()
				.expect("Please type a number");
	println!("Your guess is {},{}", guess, snum);

	/* Compare and perform operations */
	match guess.cmp(&snum) {
		Ordering::Less => println!("Less"),
		Ordering::Greater => println!("More"),
		Ordering::Equal => println!("Equal"),
	}
}
