import Foundation

func solution(_ array:[Int], _ commands:[[Int]]) -> [Int] {
    var returnArr = Array<Int>()
    
    for cmd in commands {
        var i = cmd[0]
        var j = cmd[1]
        var k = cmd[2] 
        
        var arr = array[i - 1 ..< j]
        var sorted = arr.sorted(by : <)
        returnArr.append(sorted[k - 1])
    }
    
    return returnArr 
}
