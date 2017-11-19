package problemas;

import java.util.ArrayList;

public class Problema214AbdicacionDeUnRey {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int reyesDinastia = in.nextInt();
		while ( reyesDinastia != 0 ) {
			casoDePrueba(reyesDinastia);
			System.out.println();
			reyesDinastia = in.nextInt();
		}
	}
	
	public static void casoDePrueba(int reyesDinastia) {
		ArrayList<String> reyes = new ArrayList<>();
		int[] numeros = new int[20];
		String nombre;
		for ( int i = 0; i < reyesDinastia; i++ ) {
			nombre = in.next();
			if ( reyes.contains(nombre) ) {
				numeros[reyes.indexOf(nombre)]++;
			}
			else {
				reyes.add(nombre);
				numeros[reyes.indexOf(nombre)] = 1;
			}
		}
		int herederos = in.nextInt();
		for ( int i = 0; i < herederos; i++ ) {
			nombre = in.next();
			if ( reyes.contains(nombre) ) {
				numeros[reyes.indexOf(nombre)]++;
				System.out.println(numeros[reyes.indexOf(nombre)]);
			}
			else {
				reyes.add(nombre);
				numeros[reyes.indexOf(nombre)] = 1;
				System.out.println(1);
			}
			
		}
	}
}
