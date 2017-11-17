/*
 * Para cada caso de prueba, el programa indicará el número de vueltas
 * que se debe dar a la rutina de Kaprekar para alcanzar el 6174.
 * Para los números repdigits deberá escribir 8.
 * Para la propia constante de Kaprekar deberá indicar 0.
 */

import java.util.ArrayList;

public class Problema100 {

	public static void main(String[] args) {
		
		int counter;
		final int KAPREKAR = 6174;
		final String KAPREKAR_STRING = "6174";
		
		for ( String arg: args ) {
			if ( arg.equals(KAPREKAR_STRING) ) {
				System.out.println(0);
			}
			else {
				counter = 0;
				while ( arg != KAPREKAR_STRING && counter < 8 ) {
					arg = nextKaprekar(arg);
					counter++;
				}
				System.out.println(counter);
			}
			
		}
		
	}

	private static String nextKaprekar(String arg) {
		char[] array;
		char[] newArray = new char[4];
		char max = 0;
		array = arg.toCharArray();
		// Order the array
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if ( number > max ) {
					
				}
			}
		}
	}
	
}
