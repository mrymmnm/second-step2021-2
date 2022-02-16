require "narray"
science = NArray.to_na( [65, 80, 67, 35, 58, 60, 72, 75, 68, 92,
                         36, 50, 25, 85, 46, 42, 78, 62, 84, 70] )
english = NArray.to_na( [44, 87, 100, 63, 52, 60, 58, 73, 55, 86,
                         29, 56, 89, 23, 65, 84, 64, 27, 86, 84] )
science2 = [65, 80, 67, 35, 58, 60, 72, 75, 68, 92,
                         36, 50, 25, 85, 46, 42, 78, 62, 84, 70]
english2 = [44, 87, 100, 63, 52, 60, 58, 73, 55, 86,
                         29, 56, 89, 23, 65, 84, 64, 27, 86, 84]

puts "理科"
puts "平均点:#{science.mean}"
puts "標準偏差:#{science.stddev}"
puts "合計点:#{science.sum}"

puts "n/英語"
puts "平均点:#{english.mean}"
puts "標準偏差:#{english.stddev}"
puts "合計点:#{english.sum}"
