/// A trivial function used to demonstrate
/// rust bindings that are callable from C
#[no_mangle]
pub extern "C" fn add_two(x: u32) -> u32 {
    let x_plus_two = x + 2;
    println!("{} + 2 = {}", x, x_plus_two);

    return x_plus_two;
}

#[cfg(test)]
mod tests {
    use super::*;

    /// A unit test to demonstrate that we can unit test
    /// functions within rust even if they are callable to C
    #[test]
    fn correct_add_two() {
        assert_eq!(add_two(2), 4);
    }
}
