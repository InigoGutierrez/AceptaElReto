package problemas;

public class Problema106 {

	static java.util.Scanner in;

	public static void main(String[] args) {
		in = new java.util.Scanner(System.in);
		
		String codigo = in.next();
		while ( !codigo.equals("0") ) {
			System.out.println(casoDePrueba(codigo));
			codigo = in.next();
		}
	}
	
	public static String casoDePrueba(String codigo) {
		//System.out.println("Caso: " + codigo);
		char controlDigit = codigo.charAt(codigo.length()-1);
		String numberString = codigo.substring(0, codigo.length()-1);
		//System.out.println("Control digit: " + controlDigit + "\nNumber: " + numberString);
		// Añadir ceros a la izquierda
		if ( numberString.length() < 7 ) {
			for (int i = numberString.length(); i < 7; i++) {
				numberString = "0" + numberString;
			}
		}
		else if ( numberString.length() > 7 && numberString.length() < 12 ) {
			for (int i = numberString.length(); i < 12; i++) {
				numberString = "0" + numberString;
			}
		}
		//System.out.println("Full number: " + numberString);
		int counter = 0;
		for ( int i = 1; i <= numberString.length(); i++ ) {
			if ( i%2 == 0 ) {
				counter += Character.getNumericValue(numberString.charAt(numberString.length()-i));
			}
			else {
				counter += 3 * Character.getNumericValue(numberString.charAt(numberString.length()-i));
			}
		}
		//System.out.println("Counter: " + counter);
		if ( ((counter + Character.getNumericValue(controlDigit)) % 10) != 0 ) {
			return "NO";
		}
		if ( numberString.length() > 12 ) {
			return "NO";
		}
		String result = "SI";
		if ( numberString.length() > 7 ) {
			result += " " + getCountry(numberString);
		}
		return result;
	}

	public static String getCountry(String numberString) {
		if ( numberString.charAt(0) == '0' ) {
			return "EEUU";
		}
		String twoNumbers = numberString.substring(0, 2);
		if ( twoNumbers.equals("50") ) {
			return "Inglaterra";
		}
		if ( twoNumbers.equals("70") ) {
			return "Noruega";
		}
		String threeNumbers = numberString.substring(0, 3);
		if ( threeNumbers.equals("380") ) {
			return "Bulgaria";
		}
		if ( threeNumbers.equals("539") ) {
			return "Irlanda";
		}
		if ( threeNumbers.equals("560") ) {
			return "Portugal";
		}
		if ( threeNumbers.equals("759") ) {
			return "Venezuela";
		}
		if ( threeNumbers.equals("850") ) {
			return "Cuba";
		}
		if ( threeNumbers.equals("890") ) {
			return "India";
		}
		return "Desconocido";
	}
}
