<div id="webpush-topics-user-panel-wrapper">
  <div class="title">Notifications</div>
</div>

<div id="webpush-topics-panel">

  <div class="info-text">
    <p>Vous pouvez vous abonner à une ou plusieurs thématiques.</p>
    <p>Vous recevrez une notification chaque fois qu'un événement corresponsant à l'une de vos thématiques sera publié.</p>
  </div>

  <div class="topics-list">
    <?php foreach ($topics as $tid => $topic): ?>
        <label><input type="checkbox" class="webpush-topics" name="webpush-topic-<?php print $tid; ?>" value="<?php print $tid; ?>"><?php print $topic; ?>
        </label>
    <?php endforeach; ?>
  </div>

  <div class="action-buttons">
    <div id="webpush-topics-subscribe" class="webpush-topics-button"><?php print t('Enregistrer', [], ['context' => 'webpush_topics']); ?></div>
    <div id="webpush-topics-unsubscribe" class="webpush-topics-button"><?php print t('Désactiver', [], ['context' => 'webpush_topics']); ?></div>
  </div>
</div>
