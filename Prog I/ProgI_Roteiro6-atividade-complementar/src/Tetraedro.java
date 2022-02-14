
public class Tetraedro extends FormaTridimencional {

	public Tetraedro() {
		super();
	}

	public Tetraedro(double ar) {
		super(ar);
	}

	@Override
	public double obterVolume() {
		return ( Math.pow(getAr(), 3) * Math.sqrt(2) ) / 12;
	}

	@Override
	public double obterArea() {
		return ( Math.pow(getAr(), 2) * Math.sqrt(3) );
	}

}
