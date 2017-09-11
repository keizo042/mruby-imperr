class ImplementationError
  def to_s
    "ImplementationError(#{@file} , #{@line})"
  end

  def line
    @line
  end

  def file
    @file
  end
end
