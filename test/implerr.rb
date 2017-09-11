assert("ImplementationError is a Class") do
  assert_equal Class, ImplementationError.class
end

assert("ImplementationError is a child of StandardError") do
  assert_equal StandardError, ImplementationError.superclass
end

assert("ImplementationError#initialize") do
 assert_nothing_raised("Argument __FILE__ __LINE__")  do
   ImplementationError.new __FILE__, __LINE__
 end

 assert_nothing_raised("Argument __FILE__")  do
   ImplementationError.new __FILE__
 end

 assert_nothing_raised("Argument __LINE") do
   ImplementationError.new __LINE__
 end
end
