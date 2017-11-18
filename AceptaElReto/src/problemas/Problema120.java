package problemas;

public class Problema120 {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int lado = in.nextInt();
		int inicial = in.nextInt();
		while ( lado != 0 ) {
			System.out.println(casoDePrueba(lado, inicial));
			lado = in.nextInt();
			inicial = in.nextInt();
		}
	}
	
	/**
	 * Devuelve la constante mágica del cuadrado mágico creado según el enunciado.
	 * @param lado
	 * @param marcador
	 * @return
	 */
	public static int casoDePrueba(int lado, int marcador) {
		int row = 0; // Señala la fila a escribir del cuadrado
		int col = lado/2; // Señala la columna a escribir del cuadrado
		int counter = 0; // Guarda el número mágico
		int counterDiagonal = 0; // Cuando llega a lado, una diagonal entera se ha escrito y la siguiente casilla a escribir es la inferior
		int counterAdded = 0; // La ejecución termina cuando se han sumado "lado" elementos.
		while ( true ) {
			if ( row == lado - 1 - col ) { // en diagonal principal
				counter += marcador;
				counterAdded++;
			}
			if ( counterAdded == lado ) {
				return counter;
			}
			row--;
			col++;
			if ( row < 0 ) {
				row = lado - 1;
			}
			if ( col >= lado ) {
				col = 0;
			}
			if ( counterDiagonal == lado - 1 ) {
				counterDiagonal = -1;
				col--;
				row += 2;
			}
			marcador++;
			counterDiagonal++;
		}
	}
}
