
public class Triangulo extends FormaBidimencional {

	public Triangulo() {
		super();
	}

	public Triangulo(double ar) {
		super(ar);
	}

	@Override
	public double obterArea() {
		return ( Math.pow(getAr(), 2) * Math.sqrt(3) ) / 4;
	}

}
