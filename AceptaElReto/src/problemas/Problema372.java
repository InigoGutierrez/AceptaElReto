package problemas;

public class Problema372 {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int numCasos = Integer.parseInt(in.nextLine());
		for (int i = 0; i < numCasos; i++) {
			System.out.println(casoDePrueba(in.nextLine()));
		}
	}
	
	public static String casoDePrueba(String palabra) {
		boolean primeraMayus = Character.isUpperCase(palabra.charAt(0));
		char[] palabraChareada = palabra.toLowerCase().toCharArray();
		char[] palabraOrdenada = new char[palabraChareada.length];
		for ( int i = 0; i < palabraChareada.length; i++ ) {
			palabraOrdenada[i] = palabraChareada[palabraChareada.length-1-i];
		}
		if ( primeraMayus ) {
			palabraOrdenada[0] = Character.toUpperCase(palabraOrdenada[0]);
		}
		return String.copyValueOf(palabraOrdenada);
	}
	
}
