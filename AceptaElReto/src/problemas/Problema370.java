package problemas;

public class Problema370 {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int numCasos = Integer.parseInt(in.nextLine());
		for (int i = 0; i < numCasos; i++) {
			String llave = in.nextLine();
			System.out.println(casoDePrueba(llave));
		}
	}
	public static String casoDePrueba(String llave) {
		int calibreUno = Integer.parseInt(llave.substring(0, llave.indexOf('-')));
		int calibreDos = Integer.parseInt(llave.substring(llave.indexOf('-') + 1));
		if ( calibreUno - calibreDos == 1 ) {
			if ( calibreDos % 2 == 0 ) {
				return "SI";
			}
			return "NO";
		}
		if ( calibreDos - calibreUno == 1 ) {
			if ( calibreUno % 2 == 0 ) {
				return "SI";
			}
			return "NO";
		}
		return "NO";
	}
}
