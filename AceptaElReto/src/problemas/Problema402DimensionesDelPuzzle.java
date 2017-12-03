package problemas;

public class Problema402DimensionesDelPuzzle {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		int caso;
		while ( true ) {
			caso = in.nextInt();
			if ( caso == 0 ) {
				break;
			}
			System.out.println(casoDePrueba(caso));
		}
	}
	
	public static int casoDePrueba(int caso) {
		int lado = (int) Math.sqrt(caso);
		while ( caso % lado != 0 ) {
			lado--;
		}
		return caso / lado;
	}
	
	/*public static int findLowestNextDivisorInRange( int lado, int caso ) {
		
	}*/
	
}
