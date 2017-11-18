package problemas;

public class Problema119 {
	
	static java.util.Scanner in;

	public static void main(String[] args) {
		in = new java.util.Scanner(System.in);
		
		int tamaño = in.nextInt();
		while ( tamaño != 0 ) {
			System.out.println(casoDePrueba(tamaño));
			tamaño = in.nextInt();
		}
	}
	
	public static int casoDePrueba(int tamaño) {
		double root = Math.sqrt((double)tamaño);
		int lado = (int) Math.floor(root);
		int escudos = lado * lado + lado * 4;
		if ( lado * lado < tamaño ) {
			escudos += casoDePrueba(tamaño - lado * lado);
		}
		return escudos;
	}

}
