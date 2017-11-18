/*
 * Para cada caso de prueba, el programa indicará el número de vueltas
 * que se debe dar a la rutina de Kaprekar para alcanzar el 6174.
 * Para los números repdigits deberá escribir 8.
 * Para la propia constante de Kaprekar deberá indicar 0.
 */

import java.util.Arrays;

public class Problema100 {

	public static void main(String[] args) {
		
		int counter;
		final String KAPREKAR_STRING = "6174";
		
		for ( String arg: args ) {
			//System.out.println("Input: " + arg);
			if ( arg.equals(KAPREKAR_STRING) ) {
				System.out.println(0);
			}
			else {
				counter = 0;
				while ( !arg.equals(KAPREKAR_STRING) && counter < 8 ) {
					arg = nextKaprekar(arg);
					counter++;
					//System.out.println("Iteration " + counter + ": " + arg);
				}
				System.out.println(counter);
			}
			
		}
		
	}

	private static String nextKaprekar(String arg) {
		char[] ascending = new char[4];
		char[] chars = arg.toCharArray();
		for ( int i = 0; i < 4; i++ ) {
			if (!(i >= chars.length) ) {
				ascending[i] = chars[i];
			}
			else {
				ascending[i] = '0';
			}
		}
		// Order the array in ascending order
		Arrays.sort(ascending);
		//System.out.println("Ascending ordered for " + arg + ": " + charArrayToString(ascending));
		
		// Compute new value
		int ascendingInt = Character.getNumericValue(ascending[0])*1000
							+ Character.getNumericValue(ascending[1])*100
							+ Character.getNumericValue(ascending[2])*10
							+ Character.getNumericValue(ascending[3]);
		int descendingInt = Character.getNumericValue(ascending[3])*1000
							+ Character.getNumericValue(ascending[2])*100
							+ Character.getNumericValue(ascending[1])*10
							+ Character.getNumericValue(ascending[0]);
		//System.out.println("Result: " + String.valueOf(descendingInt - ascendingInt));
		return String.valueOf(descendingInt - ascendingInt);
	}
	
	/**
	 * For testing.
	 * @param charArray
	 * @return String corresponding to charArray.
	 */
	/*public static String charArrayToString(char[] charArray) {
		String result = "";
		for ( int i = 0; i < charArray.length; i++ ) {
			result += String.valueOf(Character.getNumericValue(charArray[i]));
		}
		return result;
	}*/
	
}
