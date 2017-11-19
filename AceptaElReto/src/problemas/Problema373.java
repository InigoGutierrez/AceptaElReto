package problemas;

/*
 * Cubos visibles
 * 
 * cara * 6 - arista * 12 + esquinas
 * o
 * cubo(n) - cubo(n-2)
 */

public class Problema373 {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int numCasos = in.nextInt();
		for (int i = 0; i < numCasos; i++) {
			System.out.println(casoDePrueba(in.nextLong()));
		}
	}
	
	public static String casoDePrueba(long arista) {
		if ( arista == 1 ) {
			return String.valueOf(1);
		}
		return String.valueOf(arista*arista*arista - (arista-2)*(arista-2)*(arista-2));
		/*long cara = arista*arista;
		int esquinas = 4;
		return String.valueOf(cara*6 - arista*6 + esquinas);*/
	}
}
