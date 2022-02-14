public class App {

	public static void main(String[] args) {
		
		Forma formas[] = new Forma[6];
		
		formas[0] = new Circulo(10.0);
		formas[1] = new Quadrado(10.0);
		formas[2] = new Triangulo(10.0);
		formas[3] = new Esfera(10.0);
		formas[4] = new Cubo(10.0);
		formas[5] = new Tetraedro(10.0);
		
		for ( Forma f : formas ) {
			
			System.out.printf("Area %f ", f.obterArea());

			if ( f instanceof FormaTridimencional )
				System.out.printf("Volume %f", ((FormaTridimencional)f).obterVolume());

			System.out.print("\n");
			
		}
				
	}

}
