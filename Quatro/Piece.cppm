export module Piece;
import <iostream>;
namespace quarto
{
	export class Piece
	{
	public:
		enum class Color : uint8_t
		{
			WHITE,
			BLACK
		};

		enum class Height : uint8_t
		{
			SHORT,
			TALL
		};

		enum class Shape : uint8_t
		{
			ROUND,
			SQUARE
		};

		enum class Body : uint8_t
		{
			HOLLOW,
			FULL
		};

		Piece(Color color, Height height, Shape shape, Body body)
			: m_color(color), m_height(height), m_shape(shape), m_body(body) {
		}

		Piece(const Piece& p) = delete;

		Piece& operator=(const Piece& p) = delete;

		Piece(Piece&& p) noexcept = default;

		Piece& operator=(Piece&& p) noexcept = default;

		Color getColor() const {
			return m_color;
		}

		Height getHeight() const {
			return m_height;
		}

		Shape getShape() const {
			return m_shape;
		}

		Body getBody() const {
			return m_body;
		}

	private:
		Color m_color : 1;
		Height m_height : 1;
		Shape m_shape : 1;
		Body m_body : 1;

	};
	export std::ostream& operator<<(std::ostream& os, const Piece& piece);

}