package problemas;

/*
 * Encriptación de mensajes
 * 
 * Cada caso de prueba consiste en una única línea cuyo primer carácter es el código de la letra 'p',
 * seguido de un mensaje codificado con el método Cesar descrito antes utilizando el desplazamiento adecuado
 * para que la letra 'p' se codifique con ese primer carácter.
 * Los casos de prueba terminan con un mensaje codificado que, una vez traducido, contiene exactamente la cadena "FIN".
 * Cuando se lee este mensaje codificado el programa debe terminar sin generar ninguna otra salida más.
 * 
 * Para cada caso de prueba, el programa indicará el número de vocales no acentuadas que contiene el mensaje codificado.
 */

public class Problema102 {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);

		int result = 0;
		while ( !(result == -1) ) {
			result = casoDePrueba();
			if ( result != -1 ) {
				System.out.println(result);
			}
		}
		
	}

	/**
	 * Devuelve el número de vocales tras decodificar la string
	 * @return
	 */
	public static int casoDePrueba() {
		String caso = in.nextLine();
		char charPointer = caso.charAt(0);
		int desp = 'p' - charPointer;
		int counter = 0;
		String finalString = "";
		//System.out.println("Caso: " + caso + " First char: " + charPointer + " Desp: " + desp);
		// Get final string (to check for "FIN")
		for ( int i = 1; i < caso.length(); i++ ) {
			charPointer = caso.charAt(i);
			charPointer = addToLetter(charPointer, desp);
			finalString += String.valueOf(charPointer);
		}
		//System.out.println("Resultado: " + finalString);
		if ( finalString.equals("FIN") ) {
			return -1;
		}
		// Count vocals
		finalString = finalString.toLowerCase();
		for ( int i = 0; i < finalString.length(); i++ ) {
			charPointer = finalString.charAt(i);
			if ( charPointer == 'a' || charPointer == 'e' || charPointer == 'i' || charPointer == 'o' || charPointer == 'u' ) {
				counter++;
			}
		}
		return counter;
	}

	private static char addToLetter(char charPointer, int desp) {
		// Don't change non-letter char
		if ( !Character.isAlphabetic(charPointer) ) {
			return charPointer;
		}
		int valueToAdd = 1;
		if ( desp < 0 ) {
			valueToAdd = -1;
		}
		while ( desp != 0 ) {
			charPointer = (char)( ((int)charPointer) + valueToAdd );
			if ( charPointer == 'z' + 1 ) {
				charPointer = 'a';
			}
			else if ( charPointer == 'a' - 1 ) {
				charPointer = 'z';
			}
			else if ( charPointer == 'Z' + 1 ) {
				charPointer = 'A';
			}
			else if ( charPointer == 'A' - 1 ) {
				charPointer = 'Z';
			}
			desp -= valueToAdd;
		}
		return charPointer;
	}

}
