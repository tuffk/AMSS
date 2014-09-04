class AirbusBuilder : public Builder
{
	static int serial;

public:
	void setMarca()
	{
		miAvion->setMarca("Airbus");
	}

	void setModelo()
	{
		miAvion->setModelo("A320");
	}

	void setSerie()
	{
		miAvion->setNoSerie(serial);
		serial++;
	}
	void setMarca()
	{
		miAvion->setMarca("Airbus");
	}
	void setModelo()
	{
		miAvion->setModelo("AB123");
	}
};

int AirbusBuilder::serial = 0;