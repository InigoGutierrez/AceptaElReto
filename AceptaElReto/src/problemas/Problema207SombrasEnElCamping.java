package problemas;

public class Problema207SombrasEnElCamping {

	static java.util.Scanner in;

	public static void main(String args[]) {
		in = new java.util.Scanner(System.in);
		
		int width = in.nextInt();
		int height = in.nextInt();
		int trees = in.nextInt();
		while ( width != 0 ) {
			System.out.println(casoDePrueba(width, height, trees));
			width = in.nextInt();
			height = in.nextInt();
			trees = in.nextInt();
		}
	}
	
	public static int casoDePrueba(int width, int height, int trees) {
		boolean[][] camping = new boolean[width][height];
		int counter = 0;
		int treeCol;
		int treeRow;
		for ( int i = 0; i < trees; i++ ) { // plant trees
			treeCol = in.nextInt()-1;
			treeRow = in.nextInt()-1;
			camping[treeCol][treeRow] = true;
		}
		for ( int col = 0; col < width; col++ ) {
			for ( int row = 0; row < height; row++ ) {
				if ( !camping[col][row] ) {
					counter += hasShadow(camping, col, row);
				}
			}
		}
		return counter;
	}
	
	public static int hasShadow(boolean[][] camping, int col, int row) {
		// Check if cell (col, row) has shadow
		for ( int i = -1; i <= 1; i++ ) {
			for ( int j = -1; j <= 1; j++ ) {
				try {
					if ( camping[col+i][row+j] ) {
						return 1;
					}
				} catch (ArrayIndexOutOfBoundsException e) {
					// ignore out of array cells
				}
			}
		}
		return 0;
	}
}
