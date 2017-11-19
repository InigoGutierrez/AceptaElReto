package problemas;

/*
 * Ejemplos a tener en cuenta:
 * 1 -> 2
 * 1 2 3 4 5 -> 2 2 2 2 2
 * 1 1 2 3 -> 1 2 2 2
 * (En resumen: arrastrar cifra cambiada)
 */

public class Problema379 {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int size = in.nextInt();
		while ( size != 0 ) {
			System.out.println(casoDePrueba(size));
			size = in.nextInt();
		}
	}
	
	public static String casoDePrueba(int size) {
		int[] vector = new int[size];
		for ( int i = 0; i < size; i++ ) {
			vector[i] = in.nextInt();
		}
		if ( size == 1 ) {
			return String.valueOf(vector[0] + 1);
		}
		int index = size - 1;
		boolean updated = false;
		while ( !updated ) {
			if ( vector[index] == vector[index-1] ) {
				vector[index]++;
				for ( int i = index + 1; i < size; i++ ) {
					vector[i] = vector[index];
				}
				updated = true;
			}
			index--;
			if ( index == 0 && !updated ) {
				vector[0]++;
				for ( int i = 1; i < size; i++ ) {
					vector[i] = vector[0];
				}
				updated = true;
			}
		}
		String result = "";
		for ( int i = 0; i < size; i++ ) {
			result += vector[i];
			if ( i != size - 1 ) {
				result += " ";
			}
		}
		return result;
	}
}
