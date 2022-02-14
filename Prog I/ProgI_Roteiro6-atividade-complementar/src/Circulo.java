
public class Circulo extends FormaBidimencional {

	public Circulo() {
		super();
	}

	public Circulo(double ar) {
		super(ar);
	}
	
	@Override
	public double obterArea() {
		return Math.PI * Math.pow(getAr(), 2);
	}

}
