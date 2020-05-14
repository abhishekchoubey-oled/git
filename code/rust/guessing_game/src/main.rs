use std::cmp::Ordering;
use std::io;
use rand::Rng;

fn main() {
    println!("Welcome to Guess the number !");
	/* declare a variable and initialize it with a random number,
	we dont want this varibale to be mutable since we are not changing it during
	the course of the program */

	loop {
		let snum = rand::thread_rng().gen_range(1,101);
		println!("Input your guess ");
		/* declare a mutable variable, its mutable because we need to store info 
		   into it  */
		let mut guess = String::new();
		/* every method returns a Result which again has various methods defined 
		   of which 'expect' is one function. */
		io::stdin().read_line(&mut guess)
			.expect("Failed to read line");

		/* convert the same string into integer
		   This is called shadowing, since there is already a variable named 'guess'.
		   It is useful in conditions like this where we need to convert one variable
		   into another so that we dont have to declare two different variables*/
		let guess: u32 = match guess.trim().parse() {
			Ok(num) => num,
			Err(_) => continue, // with this the program continues to run
				// in case of an incorrect input rather than crashing.
		};
/*		println!("Your guess is {},{}", guess, snum);*/

		/* Compare and perform operations */
		match guess.cmp(&snum) {
			Ordering::Less => println!("Less"),
				Ordering::Greater => println!("More"),
				Ordering::Equal =>  { println!("Equal"); break;}
		}
	}
}

/*
loop : start an infinite loop, unconditional
let : create a new variable, immutable
let mut : create a mutable variable
read_line : take user input in string format
expect : hard, crashes in case of un-expected input
match : soft and allows you to handle errors

Result : enum with variants , Ok and Err.

*/
