
public class Esfera extends FormaTridimencional {

	public Esfera() {
		super();
		// TODO Auto-generated constructor stub
	}

	public Esfera(double ar) {
		super(ar);
		// TODO Auto-generated constructor stub
	}

	@Override
	public double obterVolume() {
		return ( 4 * Math.PI * Math.pow(getAr(), 3) ) / 3;
	}

	@Override
	public double obterArea() {
		return ( 4 * Math.PI * Math.pow(getAr(), 2));
	}

}
