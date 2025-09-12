from graphviz import Digraph

# Create Digraph
dot = Digraph(comment="Digital Krishi Officer MVP Flow", format="png")
dot.attr(rankdir="LR", size="8")

# Farmer Interaction
dot.node("Farmer", "👨‍🌾 Farmer\nHindi Query:\n'मेरे धान में कीड़े लग गए हैं'", shape="box", style="rounded,filled", fillcolor="lightyellow")

# Bot Acknowledgement
dot.node("Ack", "🤖 Bot Acknowledgement\n'Hindi: 🙏 धन्यवाद! सवाल प्रोसेस हो रहा है…'", shape="box", style="rounded,filled", fillcolor="lightblue")

# Backend Processing
dot.node("Process", "⚙️ Backend Processing\n- STT (Hindi)\n- RAG + LLM\n- Context Awareness\n- Image Classifier", shape="box", style="rounded,filled", fillcolor="lightgrey")

# Bot Response
dot.node("Response", "📩 Bot Response (Hindi)\n'यह पत्ती झुलसा रोग है 🌾\n✔ समाधान: Carbendazim…'\n+ Audio (Hindi TTS)", shape="box", style="rounded,filled", fillcolor="lightgreen")

# Escalation
dot.node("Escalation", "🚨 Escalation Flow\nHindi msg:\n'यह सवाल विशेषज्ञ की राय मांगता है'\nForward to Officer", shape="box", style="rounded,filled", fillcolor="mistyrose")

# Officer
dot.node("Officer", "👩‍💼 Agri Officer\nReceives query + AI draft\nReplies → Sent back to farmer in Hindi", shape="box", style="rounded,filled", fillcolor="orange")

# Feedback
dot.node("Feedback", "📊 Feedback Loop\nFarmer taps:\n✅ 'उपयोगी' or ❌ 'उपयोगी नहीं'\n→ System learns", shape="box", style="rounded,filled", fillcolor="palegoldenrod")

# Edges
dot.edge("Farmer", "Ack")
dot.edge("Ack", "Process")
dot.edge("Process", "Response")
dot.edge("Response", "Feedback")
dot.edge("Response", "Escalation", label="If <70% confidence")
dot.edge("Escalation", "Officer", label="Forward case")
dot.edge("Officer", "Farmer", label="Reply in Hindi")

# Render file
file_path = "/mnt/data/krishi_mvp_flow"
dot.render(file_path)

file_path + ".png"
