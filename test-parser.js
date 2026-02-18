const Parser = require('tree-sitter');
const ElasticsearchConsole = require('./bindings/node');

const parser = new Parser();
parser.setLanguage(ElasticsearchConsole);

const tests = [
  { desc: 'No quotes inside', text: 'POST /test\n{"msg": """hello world"""}' },
  { desc: 'Single quote inside', text: 'POST /test\n{"msg": """hello "world""""}' },
  { desc: 'Two quotes inside', text: 'POST /test\n{"msg": """hello "" world"""}' },
];

tests.forEach(test => {
  const tree = parser.parse(test.text);
  const hasError = tree.rootNode.toString().includes('ERROR');
  console.log(`${test.desc}: ${hasError ? 'FAIL ❌' : 'PASS ✓'}`);
  if (hasError) console.log('  Tree:', tree.rootNode.toString().substring(0, 100));
});
